//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface THAButton : NSObject
{
    unsigned char _identifier;
    NSUInteger _type;
}

@property(nonatomic) NSUInteger type; // @synthesize type=_type;
@property(nonatomic) unsigned char identifier; // @synthesize identifier=_identifier;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)initWithType:(NSUInteger)arg1 identifier:(unsigned char)arg2;

@end

