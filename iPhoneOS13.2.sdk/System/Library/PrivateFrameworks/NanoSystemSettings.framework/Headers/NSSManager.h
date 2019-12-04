//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSXPCConnection;
@protocol OS_dispatch_queue;

@interface NSSManager : NSObject
{
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSObject<OS_dispatch_queue> *_externalQueue;
    NSXPCConnection *_xpcConnection;
}

+ (void)displayAirplaneModeMirroringUserEducationAlert;
+ (void)displayAlertFailedRemoteAirplaneMode;
+ (void)displayAlertWithTitle:(id)arg1 body:(id)arg2 icon:(id)arg3;
+ (void)initialize;
@property(retain, nonatomic) NSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *externalQueue; // @synthesize externalQueue=_externalQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *internalQueue; // @synthesize internalQueue=_internalQueue;
- (void)getLocalesInfo:(id /* block */)arg1;
- (void)getLegalDocuments:(id /* block */)arg1;
- (void)rebootDevice;
- (void)removeProfileWithIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)installProfile:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)getProfileWithIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)getProfilesInfo:(id /* block */)arg1;
- (void)getAccountsInfoForAccountType:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)getAccountsInfo:(id /* block */)arg1;
- (void)getiCloudInfo:(id /* block */)arg1;
- (void)obliterateGizmoPreservingeSIM:(_Bool)arg1 completionHandler:(id /* block */)arg2;
- (void)obliterateGizmo:(id /* block */)arg1;
- (void)setDeviceName:(id)arg1;
- (void)getAboutInfo:(id /* block */)arg1;
- (void)deleteDiagnosticLogFile:(id)arg1 withResult:(id /* block */)arg2;
- (void)getDiagnosticLogsInfo:(id /* block */)arg1;
- (_Bool)fileTransferInProgress:(id)arg1;
- (void)cancelFileTransfersInProgress;
- (void)getDiagnosticLogFileFromGizmo:(id)arg1 withResults:(id /* block */)arg2;
- (void)purgeUsageBundle:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)getUsage:(id /* block */)arg1;
- (void)enableAirplaneMode:(_Bool)arg1 completionHandler:(id /* block */)arg2;
- (void)invalidate;
- (id)connection;
- (id)protocol;
- (void)dealloc;
- (void)unsafe_invalidate;
- (id)initWithQueue:(id)arg1;
- (id)init;

@end
