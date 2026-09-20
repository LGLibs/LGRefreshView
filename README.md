# LGRefreshView

iOS pull to refresh for UIScrollView, UITableView and UICollectionView.

## Preview

<img src="https://raw.githubusercontent.com/LGLibs/ReadmeFiles/master/LGRefreshView/Preview.gif" width="250"/> <img src="https://raw.githubusercontent.com/LGLibs/ReadmeFiles/master/LGRefreshView/1.png" width="250"/>

## Installation

### With source code

- [Download repository](https://github.com/LGLibs/LGRefreshView/archive/master.zip), then add [LGRefreshView directory](./LGRefreshView) to your project.
- Also you need to install [DACircularProgress](https://github.com/danielamitay/DACircularProgress) library.

### With CocoaPods

CocoaPods is a dependency manager for Objective-C, which automates and simplifies the process of using 3rd-party libraries in your projects. To install with cocoaPods, follow the "Get Started" section on [CocoaPods](https://cocoapods.org).

#### Podfile
```ruby
platform :ios, '6.0'
pod 'LGRefreshView', '~> 1.0.0'
```

### With Carthage

Carthage is a lightweight dependency manager for Swift and Objective-C. It leverages CocoaTouch modules and is less invasive than CocoaPods. To install with carthage, follow the instruction on [Carthage](https://github.com/Carthage/Carthage).

#### Cartfile
```
github "LGLibs/LGRefreshView" ~> 1.0.0
```

## Usage

In the source files where you need to use the library, import the header file:

```objective-c
#import "LGRefreshView.h"
```

### Initialization

You have several methods for initialization:

```objective-c
- (instancetype)initWithScrollView:(UIScrollView *)scrollView; // also you can pass UITableView and UICollectionView, becose its subclasses of UIScrollView
```

More init methods you can find in [LGRefreshView.h](./LGRefreshView/LGRefreshView.h)

### Handle actions

To handle actions you can use initialization methods with blocks or delegate, or implement it after initialization.

#### Delegate

```objective-c
@property (assign, nonatomic) id<LGRefreshViewDelegate> delegate;

- (void)refreshViewRefreshing:(LGRefreshView *)refreshView;
```

#### Blocks

```objective-c
@property (strong, nonatomic) void (^refreshHandler)(LGRefreshView *refreshView);
```

#### Notifications

Here is also some notifications, that you can add to NSNotificationsCenter:

```objective-c
kLGRefreshViewBeginRefreshingNotification;
kLGRefreshViewEndRefreshingNotification;
```

### More

For more details try [Xcode Demo Project](./Demo) and see [LGRefreshView.h](./LGRefreshView/LGRefreshView.h)

## Repos / Mirrors

- [TRULAB](https://trulab.ru/LGLibs/LGRefreshView)
- [GitHub](https://github.com/LGLibs/LGRefreshView)
- [GitLab](https://gitlab.com/LGLibs/LGRefreshView)
- [Gitea](https://gitea.com/LGLibs/LGRefreshView)

## License

Copyright (c) 2015 Grigorii Lutkov \<grigorii@lutkov.dev\>

Licensed under the [MIT License](./LICENSE)
