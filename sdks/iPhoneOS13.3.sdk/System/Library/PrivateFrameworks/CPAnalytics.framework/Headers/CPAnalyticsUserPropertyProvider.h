//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CPAnalytics/CPAnalyticsDynamicPropertyProvider-Protocol.h>

@interface CPAnalyticsUserPropertyProvider : NSObject <CPAnalyticsDynamicPropertyProvider>
{
}

- (NSObject )_iCPLHasChangesToProcess;
- (NSObject )_iCPLLowDiskSpace;
- (NSObject )_iCPLExceedingQuota;
- (NSObject )_iCPLEnabled;
- (NSObject )getDynamicProperty:(id)arg1 forEventName:(id)arg2 withPayload:(id)arg3;
- (void)registerAndProvideUserPropertiesFor:(id)arg1;

@end
