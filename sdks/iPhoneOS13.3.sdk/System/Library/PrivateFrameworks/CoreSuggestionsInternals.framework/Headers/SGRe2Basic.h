//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreSuggestionsInternals/SGRe2.h>

@class NSData;

@interface SGRe2Basic : SGRe2
{
    NSData *_patternData;
    struct RE2 _pattern;
    BOOL _isTrivial;
}

// - (void).cxx_destruct;
- (id)hashId;
- (id)description;
- (int)_enumerateMatchesInUtf8:(const char )arg1 fromString:(id)arg2 ngroups:(NSUInteger)arg3 block:(id /* CDUnknownBlockType */)arg4;
- (void)enumerateMatchesInUtf8:(const char )arg1 fromString:(id)arg2 ngroups:(NSUInteger)arg3 block:(id /* CDUnknownBlockType */)arg4;
- (id)matchesUtf8:(const char )arg1;
- (id)existsInUtf8:(const char )arg1;
- (void)dealloc;
- (id)initWithRegexpData:(id)arg1;
- (id)initWithRegexp:(id)arg1;

@end

