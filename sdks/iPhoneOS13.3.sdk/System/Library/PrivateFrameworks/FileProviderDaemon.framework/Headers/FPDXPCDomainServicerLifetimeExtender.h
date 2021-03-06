//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FileProviderDaemon/FPDLifetimeExtender-Protocol.h>
#import <FileProviderDaemon/FPDLifetimeServicing-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface FPDXPCDomainServicerLifetimeExtender : NSObject <FPDLifetimeExtender, FPDLifetimeServicing>
{
    int _requestEffectivePID;
    NSString *_prettyDescription;
    id /* CDUnknownBlockType */ _stopBlock;
}

@property(copy, nonatomic) id /* CDUnknownBlockType */ stopBlock; // @synthesize stopBlock=_stopBlock;
@property(retain) NSString *prettyDescription; // @synthesize prettyDescription=_prettyDescription;
@property int requestEffectivePID; // @synthesize requestEffectivePID=_requestEffectivePID;
// - (void).cxx_destruct;
- (void)stopExtendingLifetime;

@end

