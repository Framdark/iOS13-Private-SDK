//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@interface UIView (CKUtilities)
- (CGSize)__ck_frameSizeForAlignmentRectSize:(CGSize)arg1;
- (CGSize)__ck_alignmentRectSizeForFrameSize:(CGSize)arg1;
- (BOOL)__ck_containsFirstResponder;
- (BOOL)pointMostlyInside:(CGPoint)arg1 threshold:(double)arg2 velocity:(CGPoint)arg3;
- (void)layoutGradientViewsIfNeeded;
- (void)setGradientViewsNeedLayout;
- (void)messageAcknowledgmentShrinkViewToPoint:(CGPoint)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)messageAcknowledgmentBounceView:(id /* CDUnknownBlockType */)arg1;
- (id)__ck_addEqualityConstraintWithItem:(id)arg1 toItem:(id)arg2 usingAttribute:(long long)arg3;
@end

