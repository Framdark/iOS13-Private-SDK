//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <BulletinDistributorCompanion/BLTPingService-Protocol.h>

@class NSString, NSXPCConnection, NSXPCListener;
@protocol BLTPingSubscribing;

@interface BLTRemotePingSubscriberService : NSObject <NSXPCListenerDelegate, BLTPingService>
{
    id <BLTPingSubscribing> _delegate;
    NSXPCConnection *_connectionToServer;
    NSXPCConnection *_connectionFromServer;
    NSXPCListener *_listener;
    NSString *_machServiceName;
}

@property(copy, nonatomic) NSString *machServiceName; // @synthesize machServiceName=_machServiceName;
@property(retain, nonatomic) NSXPCListener *listener; // @synthesize listener=_listener;
@property(retain, nonatomic) NSXPCConnection *connectionFromServer; // @synthesize connectionFromServer=_connectionFromServer;
@property(retain, nonatomic) NSXPCConnection *connectionToServer; // @synthesize connectionToServer=_connectionToServer;
@property(nonatomic) __weak id <BLTPingSubscribing> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)_createXPCService;
- (void)_connect;
- (void)subscribeWithMachServiceName:(id)arg1;
- (void)getWillNanoPresentNotificationForSectionID:(id)arg1 subsectionIDs:(id)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)getWillNanoPresentNotificationForSectionID:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)sendBulletinSummary:(id)arg1;
- (void)pingWithRecordID:(id)arg1 forSectionID:(id)arg2 ack:(id /* CDUnknownBlockType */)arg3;
- (void)pingWithRecordID:(id)arg1 forSectionID:(id)arg2;
- (void)pingWithBulletin:(id)arg1 ack:(id /* CDUnknownBlockType */)arg2;
- (void)pingWithBulletin:(id)arg1;
- (void)subscribeToSectionID:(id)arg1 forFullBulletins:(BOOL)arg2 withAck:(BOOL)arg3 ackAllowedOnLocalConnection:(BOOL)arg4;
- (void)unsubscribeFromSectionID:(id)arg1;
- (void)dealloc;
- (id)initWithMachServiceName:(id)arg1;
- (id)init;

@end
