//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class WFRecordProperty;

@interface WFRecordPropertyMapping : NSObject
{
    id _sourceObject;
    WFRecordProperty *_sourceProperty;
    id _destinationObject;
    WFRecordProperty *_destinationProperty;
}

@property(retain, nonatomic) WFRecordProperty *destinationProperty; // @synthesize destinationProperty=_destinationProperty;
@property(nonatomic) __weak id destinationObject; // @synthesize destinationObject=_destinationObject;
@property(retain, nonatomic) WFRecordProperty *sourceProperty; // @synthesize sourceProperty=_sourceProperty;
@property(nonatomic) __weak id sourceObject; // @synthesize sourceObject=_sourceObject;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)setterMethodSignature;
- (SEL)setterSelector;
- (id)getterMethodSignature;
- (SEL)getterSelector;
- (void)invokeSetterWithBuffer:(void **)arg1 length:(unsigned long long *)arg2;
- (void)invokeGetterWithBuffer:(void **)arg1 length:(unsigned long long *)arg2;
- (void)propagateUsingSetter;
- (void)propagateUsingKVC;
- (void)propagate:(_Bool)arg1;
- (void)propagate;
- (id)initWithSourceObject:(id)arg1 property:(id)arg2 destinationObject:(id)arg3 property:(id)arg4;

@end
