//
//  SGSettersGetters.m
//  SettersGettersDemo
//
//  Created by Guillermo Saenz on 8/31/19.
//  Copyright © 2019 Guillermo Sáenz Urday. All rights reserved.
//

#import "SGSettersGetters.h"

@implementation SGiVarSettersGetters {
#pragma mark - Instance variables (iVars)
    NSString *_myString;
}

#pragma mark - Setters

- (void)setMyString:(NSString *)myString {
    _myString = myString;
}

#pragma mark - Getters

- (NSString *)myString {
    return _myString;
}

#pragma mark - Initializers

- (instancetype)init {
    self = [super init];
    if (self) {
        [self setMyString:@"My string by setters"];
        
        NSLog(@"ivar _myString: %@", _myString);
        NSLog(@"getter myString: %@", [self myString]);
        
        _myString = @"My string by ivar";
        
        NSLog(@"getter myString: %@", [self myString]);
        NSLog(@"ivar _myString: %@", _myString);
    }
    return self;
}

@end


@implementation SGManuallySynthetizedSettersGetters {
#pragma mark - Instance variables (iVars)
    NSString *_myString;
}

#pragma mark - @synthesize declarations
@synthesize myString = _myString;

#pragma mark - Setters

- (void)setMyString:(NSString *)myString {
    _myString = myString;
}

#pragma mark - Getters

- (NSString *)myString {
    return _myString;
}

#pragma mark - Initializers

- (instancetype)init {
    self = [super init];
    if (self) {
        self.myString = @"My string by setters";
        
        NSLog(@"ivar _myString: %@", _myString);
        NSLog(@"getter myString: %@", self.myString);
        
        _myString = @"My string by ivar";
        
        NSLog(@"getter myString: %@", self.myString);
        NSLog(@"ivar _myString: %@", _myString);
    }
    return self;
}

@end


@implementation SGAutomaticallySynthetizedSettersGetters

#pragma mark - Initializers

- (instancetype)init {
    self = [super init];
    if (self) {
        self.myString = @"My string by setters";
        
        NSLog(@"ivar _myString: %@", _myString);
        NSLog(@"getter myString: %@", self.myString);
        
        _myString = @"My string by ivar";
        
        NSLog(@"getter myString: %@", self.myString);
        NSLog(@"ivar _myString: %@", _myString);
    }
    return self;
}

@end
