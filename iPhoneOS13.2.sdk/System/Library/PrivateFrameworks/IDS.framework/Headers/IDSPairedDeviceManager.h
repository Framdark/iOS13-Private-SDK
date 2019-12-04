//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDS/IDSDaemonListenerProtocol-Protocol.h>

@class IDSXPCDaemonController, NSSet, NSString, _IDSCompletionHandler;

@interface IDSPairedDeviceManager : NSObject <IDSDaemonListenerProtocol>
{
    _IDSCompletionHandler *_deleteCompletion;
    _IDSCompletionHandler *_localCompletion;
    _IDSCompletionHandler *_pairedCompletion;
    _IDSCompletionHandler *_deliveryStatsCompletion;
    IDSXPCDaemonController *_xpcDaemonController;
    NSSet *_allowedTrafficClassifiers;
}

+ (id)sharedInstance;
@property(retain, nonatomic) IDSXPCDaemonController *xpcDaemonController; // @synthesize xpcDaemonController=_xpcDaemonController;
- (void)constructRAResponseDictionary:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)deliveryStats:(id)arg1;
- (void)device:(id)arg1 pairingDeleted:(_Bool)arg2;
- (void)getDeliveryStatsWithCompletionBlock:(id /* block */)arg1 queue:(id)arg2;
- (void)getPairedDeviceInfoWithCompletionBlock:(id /* block */)arg1 queue:(id)arg2;
- (void)getLocalDeviceInfoWithCompletionBlock:(id /* block */)arg1 queue:(id)arg2;
- (void)deletePairedDevice:(id)arg1 withCompletionBlock:(id /* block */)arg2 queue:(id)arg3;
- (void)setPairedDeviceInfo:(id)arg1;
- (void)dropAllMessagesWithoutAnyAllowedClassifier;
@property(retain, nonatomic) NSSet *allowedTrafficClassifiers;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
