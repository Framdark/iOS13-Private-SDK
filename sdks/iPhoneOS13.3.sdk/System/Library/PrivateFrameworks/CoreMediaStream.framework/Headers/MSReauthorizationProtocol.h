//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreMediaStream/MSStreamsProtocol.h>

@class NSArray;

@interface MSReauthorizationProtocol : MSStreamsProtocol
{
    struct __MSRPCContext {
        struct __MSSPCContext _super;
        /* void * CDUnknownFunctionPointerType finishedCallback */;
        /* void * CDUnknownFunctionPointerType authFailedCallback */;
        /* void * CDUnknownFunctionPointerType didReceiveRetryAfterCallback */;
        /* void * CDUnknownFunctionPointerType didReceiveServerSideConfigurationVersionCallback */;
    } _context;
    NSArray *_assetsInFlight;
}

// - (void).cxx_destruct;
- (void)_coreProtocolDidFailAuthenticationError:(id)arg1;
- (void)_coreProtocolDidFinishResponse:(id)arg1 error:(id)arg2;
- (void)abort;
- (void)requestReauthorizationForAssets:(id)arg1;
- (void)dealloc;
- (id)initWithPersonID:(id)arg1 baseURL:(id)arg2;
- (void)setDelegate:(id)arg1;
- (id)delegate;

@end

