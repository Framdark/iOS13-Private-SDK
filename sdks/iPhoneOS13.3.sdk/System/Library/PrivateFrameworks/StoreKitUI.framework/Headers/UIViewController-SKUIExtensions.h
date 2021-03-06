//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class SKUIScrollingSegmentedController, SKUIScrollingTabBarController, SKUIStackedBar, _UIBackdropView;

@interface UIViewController (SKUIExtensions)
- (id)_SKUIView;
- (void)unregisterForPreviewing:(id)arg1;
- (id)registerForPreviewingFromSourceView:(id)arg1 handler:(id /* CDUnknownBlockType */)arg2;
@property(nonatomic) double SKUIStackedBarSplit;
@property(readonly, nonatomic) SKUIStackedBar *SKUIStackedBar;
- (void)setNeedsNestedPagingScrollViewUpdate;
@property(readonly, nonatomic) SKUIScrollingTabBarController *scrollingTabBarController;
- (void)setNeedsScrollingSegmentContentScrollViewUpdate;
@property(readonly, nonatomic) SKUIScrollingSegmentedController *scrollingSegmentedController;
@property(readonly, nonatomic) _UIBackdropView *SKUIPinnedHeaderView;
- (void)setNeedsNavigationBarAppearanceUpdate;
@end

