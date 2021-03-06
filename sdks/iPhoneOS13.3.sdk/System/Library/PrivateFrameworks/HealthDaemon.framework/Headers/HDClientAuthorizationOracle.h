//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HDProfile, NSString, _HKEntitlements;

@interface HDClientAuthorizationOracle : NSObject
{
    HDProfile *_profile;
    NSString *_sourceBundleIdentifier;
    _HKEntitlements *_entitlements;
    BOOL _clientHasPrivateEntitlement;
}

// - (void).cxx_destruct;
- (BOOL)_shouldBypassAuthorization;
- (id)readAuthorizationStatusesForTypes:(id)arg1 error:(id )arg2;
- (id)readAuthorizationStatusForType:(id)arg1 error:(id )arg2;
- (id)additionalAuthorizationPredicateForObjectType:(id)arg1 error:(id )arg2;
- (BOOL)performReadAuthorizationTransactionWithError:(id )arg1 handler:(id /* CDUnknownBlockType */)arg2;
- (id)filteredObjectsForReadAuthorization:(id)arg1 anchor:(id)arg2 error:(id )arg3;
- (id)initWithSourceBundleIdentifier:(id)arg1 entitlements:(id)arg2 profile:(id)arg3;
- (id)init;

@end

