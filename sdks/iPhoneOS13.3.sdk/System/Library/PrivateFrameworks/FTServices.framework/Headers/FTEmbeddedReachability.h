//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface FTEmbeddedReachability : NSObject
{
    BOOL localWiFiRef;
    struct __SCNetworkReachability reachabilityRef;
}

+ (id)reachabilityForLocalWiFi;
+ (id)reachabilityForInternetConnection;
+ (id)reachabilityWithAddress:(const struct sockaddr_in )arg1;
+ (id)reachabilityWithHostName:(id)arg1;
- (long long)currentReachabilityStatus;
- (BOOL)connectionRequired;
- (long long)networkStatusForFlags:(unsigned int)arg1;
- (long long)localWiFiStatusForFlags:(unsigned int)arg1;
- (void)dealloc;

@end

