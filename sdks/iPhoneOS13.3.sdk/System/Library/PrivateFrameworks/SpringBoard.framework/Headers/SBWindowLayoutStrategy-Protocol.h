//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class UIWindow;
@protocol SBWindowLayoutStrategyObserving;

@protocol SBWindowLayoutStrategy <NSObject>
- (void)removeObserver:(id <SBWindowLayoutStrategyObserving>)arg1;
- (void)addObserver:(id <SBWindowLayoutStrategyObserving>)arg1;
- (BOOL)shouldClipForWindow:(UIWindow *)arg1;
- (CGRect)frameWithInterfaceOrientation:(long long)arg1;
@end

