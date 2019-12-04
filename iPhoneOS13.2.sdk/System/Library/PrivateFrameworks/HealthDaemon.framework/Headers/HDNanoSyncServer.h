//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthDaemon/HDSubserver.h>

#import <HealthDaemon/HDNanoSyncServerInterface-Protocol.h>

@class HDNanoSyncManager, NSString;

@interface HDNanoSyncServer : HDSubserver <HDNanoSyncServerInterface>
{
    HDNanoSyncManager *_nanoSyncManager;
}

- (void)remote_waitForLastChanceSyncWithDevicePairingID:(id)arg1 timeout:(double)arg2 completion:(id /* block */)arg3;
- (void)remote_resetNanoSyncWithCompletion:(id /* block */)arg1;
- (void)remote_forceNanoSyncWithOptions:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)remote_fetchNanoSyncPairedDevicesWithCompletion:(id /* block */)arg1;
- (id)initWithParentServer:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
