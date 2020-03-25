//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSString;

@interface TTFont : NSObject <NSSecureCoding>
{
    unsigned int _fontHints;
    NSString *_fontName;
    double _pointSize;
    id _nativeFont;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) id nativeFont; // @synthesize nativeFont=_nativeFont;
@property(readonly, nonatomic) unsigned int fontHints; // @synthesize fontHints=_fontHints;
@property(readonly, nonatomic) double pointSize; // @synthesize pointSize=_pointSize;
@property(readonly, nonatomic) NSString *fontName; // @synthesize fontName=_fontName;
// - (void).cxx_destruct;
- (id)description;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (id)initWithName:(id)arg1 size:(double)arg2 hints:(unsigned int)arg3;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)serialize;
- (void)saveToArchive:(struct Font )arg1;
- (id)initWithArchive:(const struct Font )arg1;
- (id)initWithData:(id)arg1;

@end

