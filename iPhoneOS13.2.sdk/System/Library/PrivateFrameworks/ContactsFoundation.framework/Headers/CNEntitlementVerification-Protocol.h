//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class NSString;

@protocol CNEntitlementVerification 
+ (_Bool)auditToken:(CDStruct_4c969caf)arg1 isFirstOrSecondPartyWithError:(id *)arg2;
+ (_Bool)auditToken:(CDStruct_4c969caf)arg1 hasBooleanEntitlement:(NSString *)arg2 error:(id *)arg3;
+ (_Bool)currentProcessHasBooleanEntitlement:(NSString *)arg1 error:(id *)arg2;
@end
