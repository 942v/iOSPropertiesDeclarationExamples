//
//  SGSettersGetters.m
//  SettersGettersDemo
//
//  Created by Guillermo Saenz on 8/31/19.
//  Copyright © 2019 Guillermo Sáenz Urday. All rights reserved.
//

#import "SGSettersGetters.h"

@implementation SGManuallySynthetizedSettersGetters

@synthesize manuallySynthetizedMyString = _iVarManuallySynthetizedMyString;

#pragma mark - Setters

- (void)setManuallySynthetizedMyString:(NSString *)manuallySynthetizedMyString {
    _iVarManuallySynthetizedMyString = manuallySynthetizedMyString;
}

#pragma mark - Getters

- (NSString *)manuallySynthetizedMyString {
    return _iVarManuallySynthetizedMyString;
}

#pragma mark - Initializers

- (instancetype)init {
    self = [super init];
    if (self) {
        self.manuallySynthetizedMyString = @"My string by setters";
        
        NSLog(@"ivar manuallySynthetizedMyString: %@", _iVarManuallySynthetizedMyString);
        NSLog(@"getter manuallySynthetizedMyString: %@", self.manuallySynthetizedMyString);
        
        _iVarManuallySynthetizedMyString = @"My string by ivar";
        
        NSLog(@"getter manuallySynthetizedMyString: %@", self.manuallySynthetizedMyString);
        NSLog(@"ivar manuallySynthetizedMyString: %@", _iVarManuallySynthetizedMyString);
    }
    return self;
}

@end

@implementation SGAutomaticallySynthetizedSettersGetters

//@synthesize autoSynthetizedMyString = _autoSynthetizedMyString;

#pragma mark - Setters

//- (void)setAutoSynthetizedMyString:(NSString *)autoSynthetizedMyString {
//    _autoSynthetizedMyString = autoSynthetizedMyString;
//}

#pragma mark - Getters

//- (NSString *)autoSynthetizedMyString {
//    return _autoSynthetizedMyString;
//}

#pragma mark - Initializers

- (instancetype)init {
    self = [super init];
    if (self) {
        self.autoSynthetizedMyString = @"My string by setters";
        
        NSLog(@"ivar autoSynthetizedMyString: %@", _autoSynthetizedMyString);
        NSLog(@"getter autoSynthetizedMyString: %@", self.autoSynthetizedMyString);
        
        _autoSynthetizedMyString = @"My string by ivar";
        
        NSLog(@"getter autoSynthetizedMyString: %@", self.autoSynthetizedMyString);
        NSLog(@"ivar autoSynthetizedMyString: %@", _autoSynthetizedMyString);
    }
    return self;
}

@end
