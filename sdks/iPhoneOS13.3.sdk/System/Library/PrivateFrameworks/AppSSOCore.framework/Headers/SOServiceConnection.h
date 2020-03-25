//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppSSOCore/SOServiceProtocol-Protocol.h>

@class NSXPCConnection;
@protocol OS_dispatch_queue;

@interface SOServiceConnection : NSObject <SOServiceProtocol>
{
    NSXPCConnection *_xpcConnection;
    NSObject<OS_dispatch_queue> *_queue;
}

@property(retain) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain) NSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
// - (void).cxx_destruct;
- (id)_doConnectWithOptions:(NSUInteger)arg1;
- (BOOL)_connectToService;
- (void)isExtensionProcessWithAuditToken:(CDStruct_6ad76789)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)debugHintsWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)realmsWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)configurationWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)cancelAuthorizationWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)beginAuthorizationWithRequestParameters:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)performAuthorizationWithRequestParameters:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)getAuthorizationHintsWithURL:(id)arg1 responseCode:(long long)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)dealloc;
- (id)initWithQueue:(id)arg1;

@end

