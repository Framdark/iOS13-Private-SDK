//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString;

@interface CKTriple : NSObject
{
    MISSING_TYPE *value;
}

+ (BOOL)supportsSecureCoding;
// - (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithSubject:(id)arg1 predicate:(id)arg2 object:(id)arg3 weight:(long long)arg4;
- (BOOL)isEqual:(id)arg1;
@property(nonatomic, readonly) long long hash;
@property(nonatomic, readonly) NSString *description;
@property(nonatomic, readonly) long long weight;
@property(nonatomic, readonly) NSString *object;
@property(nonatomic, readonly) NSString *predicate;
@property(nonatomic, readonly) NSString *subject;

@end

