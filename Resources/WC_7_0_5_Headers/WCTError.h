//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSError.h"

@class NSString;

@interface WCTError : NSError
{
    unsigned long long _level;
    NSString *_message;
}

- (void).cxx_destruct;
- (id)description;
- (unsigned long long)extendedCode;
- (id)initWithCode:(unsigned long long)arg1 level:(unsigned long long)arg2 message:(id)arg3 userInfo:(id)arg4;
- (id)initWithError:(const struct Error *)arg1;
- (_Bool)isCorruption;
- (_Bool)isOK;
@property(readonly, nonatomic) unsigned long long level; // @synthesize level=_level;
@property(readonly, nonatomic) NSString *message; // @synthesize message=_message;
- (id)numberForKey:(id)arg1;
- (id)path;
- (id)source;
- (id)sql;
- (id)stringForKey:(id)arg1;
- (int)tag;

@end
