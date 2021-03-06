//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSUUID;

@interface DMFiCloudPolicyMonitor : NSObject
{
    long long _iCloudLogoutPolicy;
    NSArray *_policyTypes;
    NSUUID *_identifier;
}

+ (BOOL)automaticallyNotifiesObserversOfICloudLogoutPolicy;
@property(readonly, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
@property(copy, nonatomic) NSArray *policyTypes; // @synthesize policyTypes=_policyTypes;
@property(nonatomic) long long iCloudLogoutPolicy; // @synthesize iCloudLogoutPolicy=_iCloudLogoutPolicy;
// - (void).cxx_destruct;
- (void)_updateiCloudLogoutFromPolicies:(id)arg1;
- (void)_updateiCloudLogout;
- (void)dealloc;
- (id)init;

@end

