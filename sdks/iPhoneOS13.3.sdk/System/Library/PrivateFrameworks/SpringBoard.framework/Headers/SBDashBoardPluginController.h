//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/CSExternalAppearanceProviding-Protocol.h>
#import <SpringBoard/CSExternalBehaviorProviding-Protocol.h>
#import <SpringBoard/CSExternalEventHandling-Protocol.h>
#import <SpringBoard/SBLockScreenPluginManagerDelegate-Protocol.h>
#import <SpringBoard/SBLockScreenPluginPresenting-Protocol.h>

@class CSCoverSheetViewController, NSSet, NSString, SBDashBoardPluginViewController, SBLockScreenPluginManager, UIColor, _UILegibilitySettings;
@protocol SBLockScreenActionProvider;

@interface SBDashBoardPluginController : NSObject <CSExternalAppearanceProviding, CSExternalBehaviorProviding, CSExternalEventHandling, SBLockScreenPluginManagerDelegate, SBLockScreenPluginPresenting>
{
    CSCoverSheetViewController *_coverSheetViewController;
    SBDashBoardPluginViewController *_pluginViewController;
    long long _pluginViewControllerPresentationStyle;
    SBLockScreenPluginManager *_pluginManager;
}

// - (void).cxx_destruct;
- (BOOL)pluginManager:(id)arg1 plugin:(id)arg2 handleAction:(id)arg3;
- (void)pluginManager:(id)arg1 displayedPluginDidChangeFromPlugin:(id)arg2 toPlugin:(id)arg3;
- (void)pluginManager:(id)arg1 displayedPluginDidUpdateAppearance:(id)arg2;
- (void)pluginManager:(id)arg1 activePluginDidChange:(id)arg2;
- (void)pluginManager:(id)arg1 willUnloadPlugin:(id)arg2;
- (void)pluginManager:(id)arg1 didLoadPlugin:(id)arg2;
- (void)disableLockScreenPluginWithContext:(id)arg1;
- (void)enableLockScreenPluginWithContext:(id)arg1;
- (BOOL)handleEvent:(id)arg1;
- (BOOL)wouldHandleButtonEvent:(id)arg1;
@property(readonly, nonatomic) long long scrollingStrategy;
@property(readonly, nonatomic) long long proximityDetectionMode;
@property(readonly, nonatomic) long long notificationBehavior;
@property(readonly, nonatomic) NSUInteger restrictedCapabilities;
@property(readonly, nonatomic) UIColor *backgroundColor;
@property(readonly, nonatomic) _UILegibilitySettings *legibilitySettings;
@property(readonly, nonatomic) long long backgroundStyle;
@property(readonly, copy, nonatomic) NSSet *components;
@property(readonly, copy, nonatomic) NSString *appearanceIdentifier;
@property(readonly, nonatomic) long long participantState;
@property(readonly, copy, nonatomic) NSString *coverSheetIdentifier;
- (void)_presentPluginViewController:(id)arg1 withStyle:(long long)arg2 animated:(BOOL)arg3 completion:(id /* CDUnknownBlockType */)arg4;
- (void)_dismissPluginViewController:(id)arg1 withStyle:(long long)arg2 animated:(BOOL)arg3 completion:(id /* CDUnknownBlockType */)arg4;
- (void)_setPluginViewController:(id)arg1;
- (void)_deactivate;
- (void)_activate;
@property(readonly, nonatomic) id <SBLockScreenActionProvider> lockScreenActionProvider;
- (void)dealloc;
- (id)initWithCoverSheetViewController:(id)arg1;

@end

