//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@interface _DUIPotentialDrop : NSObject <NSSecureCoding, NSCopying>
{
    BOOL _forbidden;
    BOOL _precise;
    BOOL _prefersFullSizePreview;
    NSUInteger _operation;
    long long _preferredBadgeStyle;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) long long preferredBadgeStyle; // @synthesize preferredBadgeStyle=_preferredBadgeStyle;
@property(nonatomic) BOOL prefersFullSizePreview; // @synthesize prefersFullSizePreview=_prefersFullSizePreview;
@property(nonatomic) BOOL precise; // @synthesize precise=_precise;
@property(nonatomic) BOOL forbidden; // @synthesize forbidden=_forbidden;
@property(nonatomic) NSUInteger operation; // @synthesize operation=_operation;
// - (id)copyWithZone:(_NSZone )arg1;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end
