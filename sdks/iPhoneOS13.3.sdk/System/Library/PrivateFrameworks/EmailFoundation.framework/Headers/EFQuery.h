//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSArray, NSPredicate, NSString;

@interface EFQuery : NSObject <NSSecureCoding, NSCopying>
{
    Class _targetClass;
    NSPredicate *_predicate;
    NSArray *_sortDescriptors;
    NSUInteger _queryOptions;
    NSString *_label;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSString *label; // @synthesize label=_label;
@property(readonly, nonatomic) NSUInteger queryOptions; // @synthesize queryOptions=_queryOptions;
@property(readonly, copy, nonatomic) NSArray *sortDescriptors; // @synthesize sortDescriptors=_sortDescriptors;
@property(readonly, copy, nonatomic) NSPredicate *predicate; // @synthesize predicate=_predicate;
@property(readonly, nonatomic) Class targetClass; // @synthesize targetClass=_targetClass;
// - (void).cxx_destruct;
- (BOOL)isEqual:(id)arg1;
- (BOOL)_isEqualToQuery:(id)arg1;
- (NSUInteger)hash;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithTargetClass:(Class)arg1 predicate:(id)arg2 sortDescriptors:(id)arg3 queryOptions:(NSUInteger)arg4 label:(id)arg5;
- (id)initWithTargetClass:(Class)arg1 predicate:(id)arg2 sortDescriptors:(id)arg3;

@end

