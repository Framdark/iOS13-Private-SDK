//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStoreUI/SUScriptViewController.h>

@class SUScriptNavigationBar, UINavigationController;

@interface SUScriptNavigationController : SUScriptViewController
{
    UINavigationController *_navController;
}

+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)arg1;
+ (id)webScriptNameForKeyName:(id)arg1;
- (id)scriptAttributeKeys;
- (id)attributeKeys;
- (id)_navigationController;
- (id)_filteredViewControllers;
- (id)_copyNativeViewControllersFromScriptViewControllers:(id)arg1;
- (void)_setViewControllers:(id)arg1 animated:(BOOL)arg2;
- (void)_pushViewController:(id)arg1 animated:(BOOL)arg2;
- (void)_popViewControllerAnimated:(BOOL)arg1;
- (void)_popToRootViewControllerAnimated:(BOOL)arg1;
@property(retain) id viewControllers;
@property(readonly) SUScriptViewController *topViewController;
@property(copy) id toolbarHidden;
@property BOOL navigationBarHidden;
@property(readonly) SUScriptNavigationBar *navigationBar;
- (id)_className;
- (void)setViewControllers:(id)arg1 animated:(BOOL)arg2;
- (void)setToolbarHidden:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setNavigationBarHidden:(BOOL)arg1 animated:(BOOL)arg2;
- (void)pushViewController:(id)arg1 animated:(BOOL)arg2;
- (void)popViewControllerAnimated:(BOOL)arg1;
- (void)popToRootViewControllerAnimated:(BOOL)arg1;
- (void)willPerformBatchedInvocations;
- (void)didPerformBatchedInvocations;
- (id)newNativeViewController;
- (void)dealloc;
- (id)initWithRootScriptViewController:(id)arg1 clientInterface:(id)arg2;

@end
