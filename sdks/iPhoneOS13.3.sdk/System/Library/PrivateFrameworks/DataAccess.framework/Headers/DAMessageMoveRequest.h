//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface DAMessageMoveRequest : NSObject
{
    NSString *_message;
    NSString *_fromFolder;
    NSString *_toFolder;
    id _context;
}

@property(retain, nonatomic) id context; // @synthesize context=_context;
@property(copy, nonatomic) NSString *toFolder; // @synthesize toFolder=_toFolder;
@property(copy, nonatomic) NSString *fromFolder; // @synthesize fromFolder=_fromFolder;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
// - (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (id)initMoveRequestWithMessage:(id)arg1 fromFolder:(id)arg2 toFolder:(id)arg3;

@end

