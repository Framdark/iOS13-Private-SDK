//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SilexWeb/SWScript-Protocol.h>

@class NSString, WKUserScript;

@interface SWRefreshScript : NSObject <SWScript>
{
    WKUserScript *userScript;
}

@property(readonly, nonatomic) WKUserScript *userScript; // @synthesize userScript;
// - (void).cxx_destruct;
@property(readonly, nonatomic) NSString *executableScript;
@property(readonly, nonatomic) BOOL queueable;
@property(readonly, nonatomic) NSString *identifier;

@end

