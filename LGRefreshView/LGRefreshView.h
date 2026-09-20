//
// LGRefreshView.h
// LGRefreshView
//
// SPDX-License-Identifier: MIT
// Copyright (c) 2015 Grigorii Lutkov <grigorii@lutkov.dev>
//

#import <UIKit/UIKit.h>

@class LGRefreshView;

static NSString *const kLGRefreshViewBeginRefreshingNotification = @"LGRefreshViewBeginRefreshingNotification";
static NSString *const kLGRefreshViewEndRefreshingNotification   = @"LGRefreshViewEndRefreshingNotification";

@protocol LGRefreshViewDelegate <NSObject>

@required

- (void)refreshViewRefreshing:(LGRefreshView *)refreshView;

@end

@interface LGRefreshView : UIView

@property (assign, nonatomic, readonly, getter=isRefreshing) BOOL refreshing;
@property (assign, nonatomic, getter=isEnabled) BOOL              enabled;
@property (strong, nonatomic) UIColor                             *tintColor;
@property (assign, nonatomic) CGFloat                             offsetY;
@property (assign, nonatomic) UIView                              *loadingView;

/** Do not forget about weak referens to self */
@property (strong, nonatomic) void (^refreshHandler)(LGRefreshView *refreshView);

@property (assign, nonatomic) id<LGRefreshViewDelegate> delegate;

- (instancetype)initWithScrollView:(UIScrollView *)scrollView;
+ (instancetype)refreshViewWithScrollView:(UIScrollView *)scrollView;

#pragma mark -

/** Do not forget about weak referens to self for refreshHandler block */
- (instancetype)initWithScrollView:(UIScrollView *)scrollView
                    refreshHandler:(void(^)(LGRefreshView *refreshView))refreshHandler;

/** Do not forget about weak referens to self for refreshHandler block */
+ (instancetype)refreshViewWithScrollView:(UIScrollView *)scrollView
                           refreshHandler:(void(^)(LGRefreshView *refreshView))refreshHandler;

#pragma mark -

- (instancetype)initWithScrollView:(UIScrollView *)scrollView
                          delegate:(id<LGRefreshViewDelegate>)delegate;

+ (instancetype)refreshViewWithScrollView:(UIScrollView *)scrollView
                                 delegate:(id<LGRefreshViewDelegate>)delegate;

#pragma mark -

+ (void)setTintColor:(UIColor *)tintColor;
+ (void)setLoadingView:(UIView *)view;

/** Needs to be called when refreshing is ended */
- (void)endRefreshing;
/** Force refreshing programmatically */
- (void)triggerAnimated:(BOOL)animated;

#pragma mark -

/** Unavailable, use +refreshViewWithScrollView... instead */
+ (instancetype)new __attribute__((unavailable("use +refreshViewWithScrollView... instead")));
/** Unavailable, use -initWithScrollView... instead */
- (instancetype)init __attribute__((unavailable("use -initWithScrollView... instead")));
/** Unavailable, use -initWithScrollView... instead */
- (instancetype)initWithFrame:(CGRect)frame __attribute__((unavailable("use -initWithScrollView... instead")));

@end
