//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class DMFPolicyRegistration, NSArray, NSUUID;

@interface DMFApplicationPolicyMonitor : NSObject
{
    NSArray *_policyTypes;
    DMFPolicyRegistration *_registration;
    NSUUID *_identifier;
}

+ (void)createPolicyMonitorWithPolicyChangeHandler:(id /* CDUnknownBlockType */)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
@property(readonly, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) DMFPolicyRegistration *registration; // @synthesize registration=_registration;
@property(copy, nonatomic) NSArray *policyTypes; // @synthesize policyTypes=_policyTypes;
// - (void).cxx_destruct;
- (void)_fetchCategoriesIfNeededForBundleIdentifiers:(id)arg1 response:(id /* CDUnknownBlockType */)arg2;
- (void)requestPoliciesForBundleIdentifiers:(id)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
@property(readonly, getter=isEnabled) BOOL enabled;
- (void)dealloc;
- (id)_initWithPolicyChangeHandler:(id /* CDUnknownBlockType */)arg1 addingRegistration:(BOOL)arg2;
- (id)initWithPolicyChangeHandler:(id /* CDUnknownBlockType */)arg1;

@end

