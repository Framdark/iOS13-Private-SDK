//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UIClickInteractionDelegate-Protocol.h>

@class _UIClickInteraction;

@protocol _UIClickInteractionDelegateInternal <_UIClickInteractionDelegate>
- (NSUInteger)_clickInteractionDefaultDriverType:(_UIClickInteraction *)arg1;
- (void)clickInteraction:(_UIClickInteraction *)arg1 didObserveForce:(double)arg2;

@optional
- (void)_clickInteractionDidUpdateDriver:(_UIClickInteraction *)arg1;
- (void)_clickInteraction:(_UIClickInteraction *)arg1 shouldBegin:(void (^)(BOOL))arg2;
@end

