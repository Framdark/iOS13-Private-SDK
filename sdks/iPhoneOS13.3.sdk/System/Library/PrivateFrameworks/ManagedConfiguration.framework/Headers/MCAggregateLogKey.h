//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface MCAggregateLogKey : NSObject
{
}

+ (id)bucketSpecificKeys:(NSUInteger)arg1;
+ (id)keysForAllBuckets;
+ (id)debugKeys;
+ (id)keys;
+ (NSUInteger)bucket;
@property(readonly, nonatomic) NSUInteger value;
@property(readonly, nonatomic) NSString *name;

@end

