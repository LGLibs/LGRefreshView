Pod::Spec.new do |s|
    s.name = 'LGRefreshView'
    s.version = '1.0.6'
    s.platform = :ios, '12.0'
    s.license = 'MIT'
    s.homepage = 'https://github.com/LGLibs/LGRefreshView'
    s.author = { 'Grigorii Lutkov' => 'grigorii@lutkov.dev' }
    s.source = { :git => 'https://github.com/LGLibs/LGRefreshView.git', :tag => s.version }
    s.summary = 'iOS pull to refresh for UIScrollView, UITableView and UICollectionView'
    s.requires_arc = true
    s.source_files = 'LGRefreshView/*.{h,m}'
    s.dependency 'DACircularProgress', '~> 2.3.0'
end
