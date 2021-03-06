//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSString, NSURL;

@interface SUWebScriptReloadContext : NSObject <NSCopying>
{
    NSURL *_URL;
    NSString *_referringUserAgent;
    NSURL *_referrerURL;
}

@property(retain, nonatomic) NSURL *referrerURL; // @synthesize referrerURL=_referrerURL;
@property(copy, nonatomic) NSString *referringUserAgent; // @synthesize referringUserAgent=_referringUserAgent;
@property(retain, nonatomic) NSURL *URL; // @synthesize URL=_URL;
// - (void).cxx_destruct;
- (id)_copyScriptDictionaryRepresentation;
// - (id)copyWithZone:(_NSZone )arg1;

@end

