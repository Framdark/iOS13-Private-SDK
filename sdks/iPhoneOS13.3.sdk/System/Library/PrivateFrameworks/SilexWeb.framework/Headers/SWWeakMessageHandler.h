//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SilexWeb/SWMessageHandler-Protocol.h>

@protocol SWMessageHandler;

@interface SWWeakMessageHandler : NSObject <SWMessageHandler>
{
    id <SWMessageHandler> _messageHandler;
}

+ (id)handlerWithMessageHandler:(id)arg1;
@property(readonly, nonatomic) __weak id <SWMessageHandler> messageHandler; // @synthesize messageHandler=_messageHandler;
// - (void).cxx_destruct;
- (void)didReceiveMessage:(id)arg1 securityOrigin:(id)arg2;

@end

