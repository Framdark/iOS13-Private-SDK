//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreCDPInternal/CDPLocalDeviceSecretHandlerProtocol-Protocol.h>

@class CDPContext;

@interface CDPDLocalDeviceSecretHandler : NSObject <CDPLocalDeviceSecretHandlerProtocol>
{
    id /* block */ _validationHandler;
    CDPContext *_context;
}

@property(readonly, nonatomic) CDPContext *context; // @synthesize context=_context;
- (void)userDidCancelWithError:(id)arg1;
- (void)userDidEnterValidSecret:(id)arg1 type:(unsigned long long)arg2;
- (id)initWithContext:(id)arg1 validSecretHandler:(id /* block */)arg2;

@end
