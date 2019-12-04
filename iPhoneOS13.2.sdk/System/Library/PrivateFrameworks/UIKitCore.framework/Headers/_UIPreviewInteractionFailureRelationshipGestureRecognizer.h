//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UIGestureRecognizer.h>

#import <UIKitCore/UIGestureRecognizerDelegate-Protocol.h>

@class NSString, UIPreviewInteraction;

__attribute__((visibility("hidden")))
@interface _UIPreviewInteractionFailureRelationshipGestureRecognizer : UIGestureRecognizer <UIGestureRecognizerDelegate>
{
    UIPreviewInteraction *_previewInteraction;
}

@property(nonatomic) __weak UIPreviewInteraction *previewInteraction; // @synthesize previewInteraction=_previewInteraction;
- (void)_gestureRecognizerFailed:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setStateToRecognized;
- (void)setStateToFailed;
- (id)initWithPreviewInteraction:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
