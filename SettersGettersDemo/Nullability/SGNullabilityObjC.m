//
//  SGNullabilityObjC.m
//  SettersGettersDemo
//
//  Created by Guillermo Saenz on 9/2/19.
//  Copyright © 2019 Guillermo Sáenz Urday. All rights reserved.
//

#import "SGNullabilityObjC.h"

@implementation SGNullabilityObjCMacros

#pragma mark - Initialization

- (instancetype)initWithNullableString:(NSString *)nullableString noNullableNumber:(NSNumber *)noNullableNumber {
    self = [super init];
    if (self) {
        self.nullableString = nullableString;
        self.noNullableNumber = noNullableNumber;
    }
    return self;
}

#pragma mark - Methods

- (NSNumber *)getNoNullNumberFromString:(NSString *)string {
    return @0;
}

@end

@implementation SGNullabilityObjCWithoutMacros

#pragma mark - Initialization

- (instancetype)initWithNullableString:(NSString *)nullableString noNullableNumber:(NSNumber *)noNullableNumber {
    self = [super init];
    if (self) {
        self.nullableString = nullableString;
        self.noNullableNumber = noNullableNumber;
    }
    return self;
}

#pragma mark - Setters

- (void)setNullableString:(NSString *)nullableString {
    _nullableString = nullableString ? nullableString : @"";
}

#pragma mark - Methods

- (NSNumber *)getNoNullNumberFromString:(NSString *)string {
    return @1;
}

@end

@implementation SGNullabilityObjCWithoutLove

#pragma mark - Initialization

- (instancetype)initWithNullableString:(NSString *)nullableString noNullableNumber:(NSNumber *)noNullableNumber {
    self = [super init];
    if (self) {
        self.nullableString = nullableString;
        self.noNullableNumber = noNullableNumber;
    }
    return self;
}

@end
