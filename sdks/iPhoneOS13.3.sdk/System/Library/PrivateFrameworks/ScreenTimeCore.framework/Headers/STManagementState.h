//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSXPCConnection;

@interface STManagementState : NSObject
{
    BOOL _cachedShouldRequestMoreTime;
    BOOL _cachedIsRestrictionsPasscodeSet;
    NSXPCConnection *_connection;
}

@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
@property BOOL cachedIsRestrictionsPasscodeSet; // @synthesize cachedIsRestrictionsPasscodeSet=_cachedIsRestrictionsPasscodeSet;
@property BOOL cachedShouldRequestMoreTime; // @synthesize cachedShouldRequestMoreTime=_cachedShouldRequestMoreTime;
// - (void).cxx_destruct;
- (void)isExplicitContentRestricted:(id /* CDUnknownBlockType */)arg1;
- (id)shouldAllowOneMoreMinuteForCategoryIdentifier:(id)arg1 error:(id )arg2;
- (id)shouldAllowOneMoreMinuteForWebsiteURL:(id)arg1 error:(id )arg2;
- (id)shouldAllowOneMoreMinuteForBundleIdentifier:(id)arg1 error:(id )arg2;
- (BOOL)permitWebFilterURL:(id)arg1 pageTitle:(id)arg2 error:(id )arg3;
- (BOOL)performMigrationFromMCXSettings:(id)arg1 error:(id )arg2;
- (id)primaryiCloudCardDAVAccountIdentifierWithError:(id )arg1;
- (void)contactManagementStateForDSID:(id)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (void)requestToManageContactsForDSID:(id)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (void)setManageContactsEnabled:(BOOL)arg1 forDSID:(id)arg2 completionHandler:(id /* CDUnknownBlockType */)arg3;
- (void)communicationPoliciesForDSID:(id)arg1 withCompletionHandler:(id /* CDUnknownBlockType */)arg2;
- (id)communicationPoliciesWithError:(id )arg1;
- (void)communicationPoliciesWithCompletionHandler:(id /* CDUnknownBlockType */)arg1;
- (void)screenTimeSyncStateWithCompletionHandler:(id /* CDUnknownBlockType */)arg1;
- (void)setScreenTimeSyncingEnabled:(BOOL)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (void)setScreenTimeEnabled:(BOOL)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (BOOL)enableScreenTimeForDSID:(id)arg1 error:(id )arg2;
- (BOOL)setScreenTimeEnabled:(BOOL)arg1 error:(id )arg2;
- (void)screenTimeStateWithCompletionHandler:(id /* CDUnknownBlockType */)arg1;
@property(readonly) BOOL needsToSetRestrictionsPasscode;
- (void)isRestrictionsPasscodeSet:(id /* CDUnknownBlockType */)arg1;
- (BOOL)clearRestrictionsPasscodeWithError:(id )arg1;
@property(readonly, nonatomic) BOOL isRestrictionsPasscodeSet;
- (void)shouldRequestMoreTime:(id /* CDUnknownBlockType */)arg1;
@property(readonly, nonatomic) BOOL shouldRequestMoreTime;
- (id)init;
- (void)dealloc;

@end

