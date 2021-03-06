//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/HDSubserver.h>

#import <HealthDaemon/HDNotificationServerInterface-Protocol.h>

@class HDNotificationManager;

@interface HDNotificationServer : HDSubserver <HDNotificationServerInterface>
{
    HDNotificationManager *_notificationManager;
}

// - (void).cxx_destruct;
- (void)remote_postNotificationWithRequest:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)remote_postCompanionUserNotificationOfType:(long long)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)remote_setBadge:(id)arg1 forDomain:(long long)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)remote_badgeForDomain:(long long)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (id)initWithParentServer:(id)arg1;

@end

