//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class MSASAlbum, NSString;
@protocol NSObject;

@interface MSASPersonModelItem : NSObject <NSCopying>
{
    int _errorCount;
    MSASAlbum *_album;
    NSString *_albumGUID;
    id <NSObject> _object;
}

@property(retain, nonatomic) id <NSObject> object; // @synthesize object=_object;
@property(retain, nonatomic) NSString *albumGUID; // @synthesize albumGUID=_albumGUID;
@property(retain, nonatomic) MSASAlbum *album; // @synthesize album=_album;
@property(nonatomic) int errorCount; // @synthesize errorCount=_errorCount;
// - (void).cxx_destruct;
// - (id)copyWithZone:(_NSZone )arg1;
- (BOOL)isEqual:(id)arg1;

@end

