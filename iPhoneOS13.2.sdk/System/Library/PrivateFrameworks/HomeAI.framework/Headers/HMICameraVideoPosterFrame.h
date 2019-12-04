//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>



@class NSData;

@interface HMICameraVideoPosterFrame : NSObject <NSSecureCoding>
{
    NSData *_data;
    unsigned long long _width;
    unsigned long long _height;
    CDStruct_1b6d18a9 _timeOffset;
}

+ (_Bool)supportsSecureCoding;
@property(readonly) unsigned long long height; // @synthesize height=_height;
@property(readonly) unsigned long long width; // @synthesize width=_width;
@property(readonly) CDStruct_1b6d18a9 timeOffset; // @synthesize timeOffset=_timeOffset;
@property(readonly) NSData *data; // @synthesize data=_data;
- (id)initWithData:(id)arg1 timeOffset:(CDStruct_1b6d18a9)arg2 width:(unsigned long long)arg3 height:(unsigned long long)arg4;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
