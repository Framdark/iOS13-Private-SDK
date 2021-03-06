//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UISheetPresentationController.h>

@interface _UIFormSheetPresentationController : _UISheetPresentationController
{
    BOOL _layoutStateShouldAvoidKeyboard;
    double _keyboardYOrigin;
}

+ (long long)_initialMode;
- (BOOL)_presentationPotentiallyUnderlapsStatusBar;
- (long long)_defaultPresentationStyleForTraitCollection:(id)arg1;
- (CGSize)sizeForChildContentContainer:(id)arg1 withParentContainerSize:(CGSize)arg2;
- (BOOL)shouldSubscribeToKeyboardNotifications;
- (BOOL)_shouldHideBottomCorner;
- (CGRect)frameOfPresentedViewInContainerView;
- (void)_changeLayoutModeToAvoidKeyboard:(BOOL)arg1 withOrigin:(double)arg2;
- (void)_keyboardWillHide:(id)arg1;
- (void)_keyboardWillShow:(id)arg1;
- (void)dismissalTransitionWillBegin;
- (void)presentationTransitionWillBegin;
- (BOOL)_shouldPresentedViewControllerControlStatusBarAppearance;

@end

