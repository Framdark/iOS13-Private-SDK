//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface RPRequestRegistration : NSObject
{
    NSString *_requestID;
    NSDictionary *_options;
    id /* CDUnknownBlockType */ _handler;
    id /* CDUnknownBlockType */ _cnxHandler;
}

@property(copy, nonatomic) id /* CDUnknownBlockType */ cnxHandler; // @synthesize cnxHandler=_cnxHandler;
@property(copy, nonatomic) id /* CDUnknownBlockType */ handler; // @synthesize handler=_handler;
@property(copy, nonatomic) NSDictionary *options; // @synthesize options=_options;
@property(copy, nonatomic) NSString *requestID; // @synthesize requestID=_requestID;
// - (void).cxx_destruct;

@end

