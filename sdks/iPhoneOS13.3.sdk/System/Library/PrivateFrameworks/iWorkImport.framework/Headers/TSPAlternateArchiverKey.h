//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


__attribute__((visibility("hidden")))
@interface TSPAlternateArchiverKey : NSObject <NSCopying>
{
    NSUInteger _version;
    const struct FieldPath _fieldPath;
}

@property(readonly, nonatomic) const struct FieldPath fieldPath; // @synthesize fieldPath=_fieldPath;
@property(readonly, nonatomic) NSUInteger version; // @synthesize version=_version;
// - (id)copyWithZone:(_NSZone )arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)initWithVersion:(NSUInteger)arg1 fieldPath:(const struct FieldPath )arg2;
- (id)init;

@end

