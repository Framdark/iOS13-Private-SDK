//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>




@class NSNumber;

@interface FCCKTestContentDatabaseFeedCursor : NSObject <NSCopying, NSSecureCoding>
{
    NSNumber *_order;
    NSNumber *_subOrder;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSNumber *subOrder; // @synthesize subOrder=_subOrder;
@property(copy, nonatomic) NSNumber *order; // @synthesize order=_order;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
