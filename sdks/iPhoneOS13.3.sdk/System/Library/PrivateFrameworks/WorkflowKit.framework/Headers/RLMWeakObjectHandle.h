//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class RLMObjectBase;

@interface RLMWeakObjectHandle : NSObject <NSCopying>
{
    struct BasicRow<realm::Table> _row;
    struct RLMClassInfo _info;
    Class _objectClass;
}

- (id).cxx_construct;
// - (void).cxx_destruct;
// - (id)copyWithZone:(_NSZone )arg1;
@property(readonly, nonatomic) RLMObjectBase *object;
- (id)initWithObject:(id)arg1;

@end

