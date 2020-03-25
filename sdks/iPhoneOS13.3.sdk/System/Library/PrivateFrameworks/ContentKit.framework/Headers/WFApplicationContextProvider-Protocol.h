//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSBundle, NSString, UIApplication, UIWindow, WFApplicationContext;

@protocol WFApplicationContextProvider <NSObject>
- (BOOL)shouldReverseLayoutDirection;
- (UIApplication *)applicationForWFApplicationContext:(WFApplicationContext *)arg1;
- (UIWindow *)keyWindowForWFApplicationContext:(WFApplicationContext *)arg1;
- (NSString *)notificationNameForApplicationStateEvent:(long long)arg1 applicationContext:(WFApplicationContext *)arg2;
- (NSString *)currentUserInterfaceTypeForWFApplicationContext:(WFApplicationContext *)arg1;
- (NSBundle *)bundleForWFApplicationContext:(WFApplicationContext *)arg1;

@optional
@property(nonatomic) BOOL wfIdleTimerDisabled;
- (long long)currentApplicationStateForWFApplicationContext:(WFApplicationContext *)arg1;
@end

