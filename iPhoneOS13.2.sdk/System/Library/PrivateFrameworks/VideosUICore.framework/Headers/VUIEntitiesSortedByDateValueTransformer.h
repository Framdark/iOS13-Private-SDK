//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/Foundation.h>

@class NSDate;

@interface VUIEntitiesSortedByDateValueTransformer : NSValueTransformer
{
    unsigned long long _maxEntities;
    NSDate *_earliestDate;
    id /* block */ _dateForEntityBlock;
}

+ (_Bool)allowsReverseTransformation;
+ (Class)transformedValueClass;
@property(copy, nonatomic) id /* block */ dateForEntityBlock; // @synthesize dateForEntityBlock=_dateForEntityBlock;
@property(copy, nonatomic) NSDate *earliestDate; // @synthesize earliestDate=_earliestDate;
@property(nonatomic) unsigned long long maxEntities; // @synthesize maxEntities=_maxEntities;
- (id)transformedValue:(id)arg1;
- (id)initWithDateForEntityBlock:(id /* block */)arg1;
- (id)init;

@end
