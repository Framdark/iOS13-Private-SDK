//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class SBRestartManager, SBRestartTransitionRequest;

@protocol SBRestartManagerDelegate 

@optional
- (void)restartManagerExitImminent:(SBRestartManager *)arg1;
- (void)restartManager:(SBRestartManager *)arg1 willRestartWithTransitionRequest:(SBRestartTransitionRequest *)arg2;
- (void)restartManagerWillReboot:(SBRestartManager *)arg1;
- (void)restartManagerWillShutdown:(SBRestartManager *)arg1;
@end
