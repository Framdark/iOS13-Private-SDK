//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface _UIApplicationInfoParser : NSObject
{
    _Bool _isYukonLinked;
    _Bool _isExitsOnSuspend;
    _Bool _canChangeBackgroundStyle;
    _Bool _statusBarHidden;
    _Bool _statusBarHiddenWhenVerticallyCompact;
    _Bool _systemWindowsSecure;
    _Bool _optOutOfRTL;
    _Bool _disableLayoutAwareShortcuts;
    _Bool _requiresHighResolution;
    _Bool _fakingRequiresHighResolution;
    _Bool _supportsMultiwindow;
    _Bool _supportedOnLockScreen;
    int _ignoredOverrides;
    long long _requestedStatusBarStyle;
    long long _interfaceOrientation;
    long long _launchingInterfaceOrientationForSpringBoard;
    unsigned long long _supportedInterfaceOrientations;
    long long _backgroundStyle;
    long long _whitePointAdaptivityStyle;
    unsigned long long _viewControllerBasedStatusBarAppearance;
    NSString *_launchImageFile;
    NSArray *_canvasDefinitions;
    NSDictionary *_sceneConfigurations;
    long long _supportedUserInterfaceStyle;
}

@property(readonly, nonatomic) long long supportedUserInterfaceStyle; // @synthesize supportedUserInterfaceStyle=_supportedUserInterfaceStyle;
@property(readonly, nonatomic) _Bool supportedOnLockScreen; // @synthesize supportedOnLockScreen=_supportedOnLockScreen;
@property(readonly, copy, nonatomic) NSDictionary *sceneConfigurations; // @synthesize sceneConfigurations=_sceneConfigurations;
@property(readonly, copy, nonatomic) NSArray *canvasDefinitions; // @synthesize canvasDefinitions=_canvasDefinitions;
@property(readonly, nonatomic) _Bool supportsMultiwindow; // @synthesize supportsMultiwindow=_supportsMultiwindow;
@property(readonly, nonatomic) _Bool fakingRequiresHighResolution; // @synthesize fakingRequiresHighResolution=_fakingRequiresHighResolution;
@property(readonly, nonatomic) _Bool requiresHighResolution; // @synthesize requiresHighResolution=_requiresHighResolution;
@property(readonly, nonatomic) _Bool disableLayoutAwareShortcuts; // @synthesize disableLayoutAwareShortcuts=_disableLayoutAwareShortcuts;
@property(readonly, nonatomic) _Bool optOutOfRTL; // @synthesize optOutOfRTL=_optOutOfRTL;
@property(readonly, nonatomic) _Bool systemWindowsSecure; // @synthesize systemWindowsSecure=_systemWindowsSecure;
@property(readonly, nonatomic) _Bool statusBarHiddenWhenVerticallyCompact; // @synthesize statusBarHiddenWhenVerticallyCompact=_statusBarHiddenWhenVerticallyCompact;
@property(readonly, nonatomic) _Bool statusBarHidden; // @synthesize statusBarHidden=_statusBarHidden;
@property(readonly, nonatomic) _Bool canChangeBackgroundStyle; // @synthesize canChangeBackgroundStyle=_canChangeBackgroundStyle;
@property(readonly, nonatomic) _Bool isExitsOnSuspend; // @synthesize isExitsOnSuspend=_isExitsOnSuspend;
@property(readonly, copy, nonatomic) NSString *launchImageFile; // @synthesize launchImageFile=_launchImageFile;
@property(readonly, nonatomic) unsigned long long viewControllerBasedStatusBarAppearance; // @synthesize viewControllerBasedStatusBarAppearance=_viewControllerBasedStatusBarAppearance;
@property(readonly, nonatomic) long long whitePointAdaptivityStyle; // @synthesize whitePointAdaptivityStyle=_whitePointAdaptivityStyle;
@property(readonly, nonatomic) int ignoredOverrides; // @synthesize ignoredOverrides=_ignoredOverrides;
@property(readonly, nonatomic) long long backgroundStyle; // @synthesize backgroundStyle=_backgroundStyle;
@property(readonly, nonatomic) unsigned long long supportedInterfaceOrientations; // @synthesize supportedInterfaceOrientations=_supportedInterfaceOrientations;
@property(readonly, nonatomic) long long launchingInterfaceOrientationForSpringBoard; // @synthesize launchingInterfaceOrientationForSpringBoard=_launchingInterfaceOrientationForSpringBoard;
@property(readonly, nonatomic) long long interfaceOrientation; // @synthesize interfaceOrientation=_interfaceOrientation;
@property(readonly, nonatomic) long long requestedStatusBarStyle; // @synthesize requestedStatusBarStyle=_requestedStatusBarStyle;
- (_Bool)_isLinkedOnOrAfterYukon;
- (void)_computeSupportedUserInterfaceStyleFromInfo:(id)arg1;
- (void)_computeSupportedInterfaceOrientationsWithInfo:(id)arg1;
- (id)_initWithApplicationPlistData:(id)arg1;
- (id)initWithApplicationProxy:(id)arg1;
- (id)initWithbundle:(id)arg1;

@end
