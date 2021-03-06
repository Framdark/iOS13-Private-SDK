//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class RTStoredLocationEnumerationOptions;

@interface RTStoredLocationEnumerationContext : NSObject <NSSecureCoding, NSCopying>
{
    RTStoredLocationEnumerationOptions *_options;
    NSUInteger _offset;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) NSUInteger offset; // @synthesize offset=_offset;
@property(readonly, copy, nonatomic) RTStoredLocationEnumerationOptions *options; // @synthesize options=_options;
// - (void).cxx_destruct;
- (id)description;
- (NSUInteger)hash;
- (BOOL)isEqualToContext:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithEnumerationOptions:(id)arg1 offset:(NSUInteger)arg2;
- (id)initWithEnumerationOptions:(id)arg1;
- (id)init;

@end

